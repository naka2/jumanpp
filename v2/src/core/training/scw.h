//
// Created by Arseny Tolmachev on 2017/03/29.
//

#ifndef JUMANPP_SCW_H
#define JUMANPP_SCW_H

#include <cmath>
#include <vector>
#include "core/analysis/perceptron.h"
#include "core/training/loss.h"
#include "core/training/training_types.h"

namespace jumanpp {
namespace core {
namespace training {

/**
 * Structured learning perceptron-like algorithm
 * http://icml.cc/2012/papers/86.pdf
 */
class SoftConfidenceWeighted {
  std::vector<float> usableWeights;
  std::vector<float> matrixDiagonal;

  double phi;
  double C;
  double zeta;
  double psi;

  analysis::HashedFeaturePerceptron perceptron;
  analysis::ScoreConfig sconf;

  void updateMatrix(float beta, util::ArraySlice<ScoredFeature> features);

  double calcAlpha(double vt, double mt);

  double calcBeta(double alphat, double ut, double vt);

  double calcUt(double alphat, double vt);

  double calcVt(util::ArraySlice<ScoredFeature> features);

  double calcScore(util::ArraySlice<ScoredFeature> features);

  void updateWeights(float alpha, float y,
                     util::ArraySlice<ScoredFeature> features);

 public:
  SoftConfidenceWeighted(const TrainingConfig& conf);
  Status validate() const;
  void update(float loss, util::ArraySlice<ScoredFeature> features);
  analysis::ScoreConfig* scoreConfig() { return &sconf; }
};

}  // namespace training
}  // namespace core
}  // namespace jumanpp

#endif  // JUMANPP_SCW_H
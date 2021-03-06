/*
 * Copyright 2016-2017 Flatiron Institute, Simons Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MSMISC_H
#define MSMISC_H

#include <QVector>
#include "mda.h"
#include "mda32.h"
#include <math.h>
#include "pca.h"

Mda compute_mean_clip(const Mda& clips);
Mda32 compute_mean_clip(const Mda32& clips);
Mda32 compute_stdev_clip(const Mda32& clips);
Mda grab_clips_subset(const Mda& clips, const QVector<int>& inds);
Mda32 grab_clips_subset(const Mda32& clips, const QVector<int>& inds);
bool eigenvalue_decomposition_sym(Mda& U, Mda& S, Mda& X);

#endif // MSMISC_H

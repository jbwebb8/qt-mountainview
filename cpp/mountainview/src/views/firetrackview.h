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

#ifndef FIRETRACKVIEW_H
#define FIRETRACKVIEW_H

#include <mvabstractview.h>
#include <mvabstractviewfactory.h>

class FireTrackViewPrivate;
class FireTrackView : public MVAbstractView {
public:
    friend class FireTrackViewPrivate;
    FireTrackView(MVAbstractContext* context);
    virtual ~FireTrackView();

protected:
    void prepareCalculation() Q_DECL_OVERRIDE;
    void runCalculation() Q_DECL_OVERRIDE;
    void onCalculationFinished() Q_DECL_OVERRIDE;

private:
    FireTrackViewPrivate* d;
};

class MVFireTrackFactory : public MVAbstractViewFactory {
    Q_OBJECT
public:
    MVFireTrackFactory(MVMainWindow* mw, QObject* parent = 0);
    QString id() const Q_DECL_OVERRIDE;
    QString name() const Q_DECL_OVERRIDE;
    QString title() const Q_DECL_OVERRIDE;
    MVAbstractView* createView(MVAbstractContext* context) Q_DECL_OVERRIDE;
};

#endif // FIRETRACKVIEW_H

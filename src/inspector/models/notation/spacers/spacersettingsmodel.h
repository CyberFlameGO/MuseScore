/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MU_INSPECTOR_SPACERSETTINGSMODEL_H
#define MU_INSPECTOR_SPACERSETTINGSMODEL_H

#include "models/abstractinspectormodel.h"

namespace mu::inspector {
class SpacerSettingsModel : public AbstractInspectorModel
{
    Q_OBJECT

    Q_PROPERTY(PropertyItem * spacerHeight READ spacerHeight CONSTANT)

public:
    explicit SpacerSettingsModel(QObject* parent, IElementRepositoryService* repository);

    void createProperties() override;
    void requestElements() override;
    void loadProperties() override;
    void resetProperties() override;

    PropertyItem* spacerHeight() const;

private:
    void updatePropertiesOnNotationChanged() override;

    PropertyItem* m_spacerHeight = nullptr;
};
}

#endif // MU_INSPECTOR_SPACERSETTINGSMODEL_H

/*
 * Copyright (c) 2020-2021 Valve Corporation
 * Copyright (c) 2020-2021 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authors:
 * - Richard S. Wright Jr. <richard@lunarg.com>
 * - Christophe Riccio <christophe@lunarg.com>
 */

#pragma once

#include "../vkconfig_core/setting_meta.h"
#include "../vkconfig_core/setting_data.h"

#include <QObject>
#include <QWidget>
#include <QCheckBox>
#include <QTreeWidget>

#include <string>

class WidgetSettingBool : public QCheckBox {
    Q_OBJECT

   public:
    explicit WidgetSettingBool(QTreeWidget* tree, QTreeWidgetItem* item, const SettingMetaBool& meta, SettingDataBool& data);

   public Q_SLOTS:
    void OnClicked();

   Q_SIGNALS:
    void itemChanged();

   private:
    WidgetSettingBool(const WidgetSettingBool&) = delete;
    WidgetSettingBool& operator=(const WidgetSettingBool&) = delete;

    const SettingMetaBool& meta;
    SettingDataBool& data;
};

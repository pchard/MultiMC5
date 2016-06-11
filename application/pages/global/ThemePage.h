/* Copyright 2013-2015 MultiMC Contributors
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

#pragma once

#include <memory>
#include <QDialog>
#include "pages/BasePage.h"
#include "JavaCommon.h"
#include <MultiMC.h>
#include <QObjectPtr.h>

class SettingsObject;

namespace Ui
{
class ThemePage;
}

class ThemePage : public QWidget, public BasePage
{
	Q_OBJECT

public:
	explicit ThemePage(QWidget *parent = 0);
	~ThemePage();

	QString displayName() const override
	{
		return tr("Theme");
	}
	QIcon icon() const override
	{
		return MMC->getThemedIcon("theme");
	}
	QString id() const override
	{
		return "theme";
	}
	QString helpPage() const override
	{
		return "Theme";
	}
	bool apply() override;

private:
	void applySettings();
	void loadSettings();

private:
	Ui::ThemePage *ui;
};


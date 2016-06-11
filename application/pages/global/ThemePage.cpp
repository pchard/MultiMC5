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

#include "ThemePage.h"
#include "ui_ThemePage.h"

#include "settings/SettingsObject.h"
#include "MultiMC.h"

ThemePage::ThemePage(QWidget *parent) : QWidget(parent), ui(new Ui::ThemePage)
{
	ui->setupUi(this);
	ui->tabWidget->tabBar()->hide();

	loadSettings();
}

ThemePage::~ThemePage()
{
	delete ui;
}

bool ThemePage::apply()
{
	applySettings();
	return true;
}

void ThemePage::applySettings()
{
	auto s = MMC->settings();
/*
	// Memory
	s->set("MinMemAlloc", ui->minMemSpinBox->value());
	s->set("MaxMemAlloc", ui->maxMemSpinBox->value());
	s->set("PermGen", ui->permGenSpinBox->value());

	// Java Settings
	s->set("JavaPath", ui->javaPathTextBox->text());
	s->set("JvmArgs", ui->jvmArgsTextBox->text());
	JavaCommon::checkJVMArgs(s->get("JvmArgs").toString(), this->parentWidget());

	// Custom Commands
	s->set("PreLaunchCommand", ui->preLaunchCmdTextBox->text());
	s->set("WrapperCommand", ui->wrapperCmdTextBox->text());
	s->set("PostExitCommand", ui->postExitCmdTextBox->text());
*/
}
void ThemePage::loadSettings()
{
	auto s = MMC->settings();
/*
	// Memory
	ui->minMemSpinBox->setValue(s->get("MinMemAlloc").toInt());
	ui->maxMemSpinBox->setValue(s->get("MaxMemAlloc").toInt());
	ui->permGenSpinBox->setValue(s->get("PermGen").toInt());

	// Java Settings
	ui->javaPathTextBox->setText(s->get("JavaPath").toString());
	ui->jvmArgsTextBox->setText(s->get("JvmArgs").toString());

	// Custom Commands
	ui->preLaunchCmdTextBox->setText(s->get("PreLaunchCommand").toString());
	ui->wrapperCmdTextBox->setText(s->get("WrapperCommand").toString());
	ui->postExitCmdTextBox->setText(s->get("PostExitCommand").toString());
*/
}

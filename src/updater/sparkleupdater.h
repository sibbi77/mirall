/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#ifndef SPARKLEUPDATER_H
#define SPARKLEUPDATER_H

#include "updater/updater.h"

#include <QObject>

namespace Mirall {

class SparkleUpdater : public Updater {
public:
    SparkleUpdater(const QString& appCastUrl);
    ~SparkleUpdater();

    // unused in this updater
    void checkForUpdate();
    void backgroundCheckForUpdate();
    bool handleStartup() { return false; }
private:
    class Private;
    Private *d;
};

} // namespace Mirall

#endif // SPARKLEUPDATER_H
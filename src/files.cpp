#include "files.hpp"

namespace pqe {

QString execPathDialog(QWidget *parent) {
}

QByteArray loadData(const QString &path, bool pspEncrypted, bool p3Encrypted) {
}

bool saveData(QFile *file, const QByteArray &newData, bool backup,
              bool pspEncrypt, bool p3Encrypt) {
}

QByteArray decrypt(const QByteArray &data) {
}

QByteArray encrypt(const QByteArray &data) {
}

} // namespace pqe

// p3qe
// Copyright (C) 2023 Maritsu
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

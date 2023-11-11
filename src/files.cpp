#include "files.hpp"

namespace pqe {

QString execPathDialog(QWidget *parent) {
}

QByteArray loadData(const QString &path, bool pspEncrypted, bool p3Encrypted) {
  QFile file(path);
  if (!file.open(QFile::ReadOnly)) {
    throw std::runtime_error("Could not read input file!");
  } else {
    QByteArray data = file.readAll();
    if (pspEncrypted) {
    } // not implemented
    if (p3Encrypted) {
    } // not implemented
    file.close();
    return data;
  }
}

bool saveData(QFile *file, const QByteArray &newData, bool backup,
              bool pspEncrypt, bool p3Encrypt) {
  QSaveFile saveFile = QSaveFile(file->fileName());
  if (backup) {
  } // not implemented
  if (!saveFile.open(QFile::WriteOnly)) {
    throw std::runtime_error("Could not open output file for writing!");
  }
  QByteArray data = newData;
  if (p3Encrypt) {
  } // not implemented
  if (pspEncrypt) {
  } // not implemented
  if (qint64 bytesWritten;
      (bytesWritten = saveFile.write(data)) != data.size()) {
    if (bytesWritten == -1) {
      saveFile.cancelWriting();
      throw std::runtime_error(
          "An error occured while writing data (-1 returned)");
    } else /* 0 <= bytesWritten < newData.size() */ {
      saveFile.cancelWriting();
      throw std::runtime_error("Data write failed (" +
                               std::to_string(bytesWritten) + ") returned)");
    }
  }
  saveFile.commit();
  return true;
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

#pragma once

#include <storage/tx/recovery/LogRecord.h>
#include <memory>

namespace minisql {
namespace storage {

namespace log {
class BasicLogRecord;
}

namespace tx {
namespace recovery {

class CommitRecord : public LogRecord {
 public:
  explicit CommitRecord(int32_t txNum);
  explicit CommitRecord(std::unique_ptr<log::BasicLogRecord> rec);

  int32_t writeToLog() override;
  LogRecord::Type op() const override;
  int32_t txNumber() const override;
  void undo(int32_t txNum) override;

 private:
  int32_t txNum_;
};

}  // namespace recovery
}  // namespace tx
}  // namespace storage
}  // namespace minisql
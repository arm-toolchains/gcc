
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_TableModelEvent__
#define __javax_swing_event_TableModelEvent__

#pragma interface

#include <java/util/EventObject.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class TableModelEvent;
      }
      namespace table
      {
          class TableModel;
      }
    }
  }
}

class javax::swing::event::TableModelEvent : public ::java::util::EventObject
{

public:
  TableModelEvent(::javax::swing::table::TableModel *);
  TableModelEvent(::javax::swing::table::TableModel *, jint);
  TableModelEvent(::javax::swing::table::TableModel *, jint, jint);
  TableModelEvent(::javax::swing::table::TableModel *, jint, jint, jint);
  TableModelEvent(::javax::swing::table::TableModel *, jint, jint, jint, jint);
  virtual jint getColumn();
  virtual jint getFirstRow();
  virtual jint getLastRow();
  virtual jint getType();
private:
  static const jlong serialVersionUID = -7849342674552212824LL;
public:
  static const jint ALL_COLUMNS = -1;
  static const jint DELETE = -1;
  static const jint HEADER_ROW = -1;
  static const jint INSERT = 1;
  static const jint UPDATE = 0;
public: // actually protected
  jint __attribute__((aligned(__alignof__( ::java::util::EventObject)))) column;
  jint firstRow;
  jint lastRow;
  jint type;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_event_TableModelEvent__
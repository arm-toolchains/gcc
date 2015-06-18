
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkMenuPeer__
#define __gnu_java_awt_peer_gtk_GtkMenuPeer__

#pragma interface

#include <gnu/java/awt/peer/gtk/GtkMenuItemPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkGenericPeer;
              class GtkMenuPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Menu;
        class MenuItem;
        class MenuShortcut;
      namespace peer
      {
          class MenuItemPeer;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GtkMenuPeer : public ::gnu::java::awt::peer::gtk::GtkMenuItemPeer
{

public: // actually protected
  virtual void create(::java::lang::String *);
private:
  void addItem(::java::awt::peer::MenuItemPeer *, jint, jboolean);
public: // actually package-private
  virtual void setupAccelGroup(::gnu::java::awt::peer::gtk::GtkGenericPeer *);
private:
  void addTearOff();
public: // actually protected
  virtual void connectSignals();
public:
  GtkMenuPeer(::java::awt::Menu *);
  virtual void addItem(::java::awt::MenuItem *);
  virtual void addItem(::java::awt::peer::MenuItemPeer *, ::java::awt::MenuShortcut *);
  virtual void delItem(jint);
  virtual void addSeparator();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkMenuPeer__
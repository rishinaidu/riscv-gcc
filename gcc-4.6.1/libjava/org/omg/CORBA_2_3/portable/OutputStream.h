
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_2_3_portable_OutputStream__
#define __org_omg_CORBA_2_3_portable_OutputStream__

#pragma interface

#include <org/omg/CORBA/portable/OutputStream.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
        namespace portable
        {
            class BoxedValueHelper;
        }
      }
      namespace CORBA_2_3
      {
        namespace portable
        {
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA_2_3::portable::OutputStream : public ::org::omg::CORBA::portable::OutputStream
{

public:
  OutputStream();
  virtual void write_abstract_interface(::java::lang::Object *);
  virtual void write_value(::java::io::Serializable *);
  virtual void write_value(::java::io::Serializable *, ::org::omg::CORBA::portable::BoxedValueHelper *);
  virtual void write_value(::java::io::Serializable *, ::java::lang::Class *);
  virtual void write_value(::java::io::Serializable *, ::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_2_3_portable_OutputStream__

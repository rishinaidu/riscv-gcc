
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_pipeline_EventFilter__
#define __gnu_xml_pipeline_EventFilter__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace pipeline
      {
          class EventConsumer;
          class EventFilter;
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
          class ContentHandler;
          class DTDHandler;
          class ErrorHandler;
          class Locator;
          class XMLReader;
        namespace ext
        {
            class DeclHandler;
            class LexicalHandler;
        }
        namespace helpers
        {
            class XMLFilterImpl;
        }
      }
    }
  }
}

class gnu::xml::pipeline::EventFilter : public ::java::lang::Object
{

public: // actually package-private
  static ::java::lang::ClassLoader * getClassLoader();
  static ::java::lang::Class * loadClass(::java::lang::ClassLoader *, ::java::lang::String *);
private:
  static void loadClasses();
public:
  static void bind(::org::xml::sax::XMLReader *, ::gnu::xml::pipeline::EventConsumer *);
  EventFilter();
  EventFilter(::gnu::xml::pipeline::EventConsumer *);
  virtual void chainTo(::org::xml::sax::helpers::XMLFilterImpl *);
  virtual void setErrorHandler(::org::xml::sax::ErrorHandler *);
  virtual ::org::xml::sax::ErrorHandler * getErrorHandler();
  virtual ::gnu::xml::pipeline::EventConsumer * getNext();
  virtual void setContentHandler(::org::xml::sax::ContentHandler *);
  virtual ::org::xml::sax::ContentHandler * getContentHandler();
  virtual void setDTDHandler(::org::xml::sax::DTDHandler *);
  virtual ::org::xml::sax::DTDHandler * getDTDHandler();
  virtual void setProperty(::java::lang::String *, ::java::lang::Object *);
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual ::org::xml::sax::Locator * getDocumentLocator();
  virtual void setDocumentLocator(::org::xml::sax::Locator *);
  virtual void startDocument();
  virtual void skippedEntity(::java::lang::String *);
  virtual void processingInstruction(::java::lang::String *, ::java::lang::String *);
  virtual void characters(JArray< jchar > *, jint, jint);
  virtual void ignorableWhitespace(JArray< jchar > *, jint, jint);
  virtual void startPrefixMapping(::java::lang::String *, ::java::lang::String *);
  virtual void startElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::org::xml::sax::Attributes *);
  virtual void endElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void endPrefixMapping(::java::lang::String *);
  virtual void endDocument();
  virtual void unparsedEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void notationDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void startDTD(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void endDTD();
  virtual void comment(JArray< jchar > *, jint, jint);
  virtual void startCDATA();
  virtual void endCDATA();
  virtual void startEntity(::java::lang::String *);
  virtual void endEntity(::java::lang::String *);
  virtual void elementDecl(::java::lang::String *, ::java::lang::String *);
  virtual void attributeDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void externalEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void internalEntityDecl(::java::lang::String *, ::java::lang::String *);
private:
  ::org::xml::sax::ContentHandler * __attribute__((aligned(__alignof__( ::java::lang::Object)))) docHandler;
  ::org::xml::sax::ContentHandler * docNext;
  ::org::xml::sax::DTDHandler * dtdHandler;
  ::org::xml::sax::DTDHandler * dtdNext;
  ::org::xml::sax::ext::LexicalHandler * lexHandler;
  ::org::xml::sax::ext::LexicalHandler * lexNext;
  ::org::xml::sax::ext::DeclHandler * declHandler;
  ::org::xml::sax::ext::DeclHandler * declNext;
  ::org::xml::sax::Locator * locator;
  ::gnu::xml::pipeline::EventConsumer * next;
  ::org::xml::sax::ErrorHandler * errHandler;
public:
  static ::java::lang::String * FEATURE_URI;
  static ::java::lang::String * PROPERTY_URI;
  static ::java::lang::String * DECL_HANDLER;
  static ::java::lang::String * LEXICAL_HANDLER;
private:
  static jboolean loaded;
  static ::java::lang::Class * nsClass;
  static ::java::lang::Class * validClass;
  static ::java::lang::Class * wfClass;
  static ::java::lang::Class * xincClass;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_pipeline_EventFilter__

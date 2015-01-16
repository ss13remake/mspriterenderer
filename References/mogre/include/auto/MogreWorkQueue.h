/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreWorkQueue.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//WorkQueue
	//################################################################
	
	public ref class WorkQueue : public Wrapper
	{
		
		        public: typedef Ogre::WorkQueue::RequestID RequestID;
		      
	
		//Nested Types
		public: ref class Request;
		public: ref class Response;
	
		//################################################################
		//Request
		//################################################################
	
		public: ref class Request
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Request( Ogre::WorkQueue::Request* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~Request()
			{
				this->!Request();
			}
			!Request()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::WorkQueue::Request* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
	
	
			property bool Aborted
			{
			public:
				bool get();
			}
	
			property Mogre::uint16 Channel
			{
			public:
				Mogre::uint16 get();
			}
	
			property Mogre::uint8 RetryCount
			{
			public:
				Mogre::uint8 get();
			}
	
			property Mogre::uint16 Type
			{
			public:
				Mogre::uint16 get();
			}
	
			void AbortRequest( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( WorkQueue::Request )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//IRequestHandler
		//################################################################
	
		public: interface class IRequestHandler
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IRequestHandler, Ogre::WorkQueue::RequestHandler )
	
			virtual Ogre::WorkQueue::RequestHandler* _GetNativePtr();
	
		public:
	
	
			virtual bool CanHandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ );
	
			virtual Mogre::WorkQueue::Response^ HandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IRequestHandler
		//################################################################
		
		public: ref class RequestHandler abstract : public Wrapper, public Mogre::WorkQueue::IRequestHandler
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			RequestHandler( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::WorkQueue::RequestHandler* _IRequestHandler_GetNativePtr() = IRequestHandler::_GetNativePtr;
		
		
			//Public Declarations
		public:
			RequestHandler( );
		
		
			[Implementation::MethodIndex( 0 )]
			virtual bool CanHandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ );
		
			virtual Mogre::WorkQueue::Response^ HandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ ) abstract;
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//################################################################
		//Response
		//################################################################
	
		public: ref class Response
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Response( Ogre::WorkQueue::Response* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~Response()
			{
				this->!Response();
			}
			!Response()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::WorkQueue::Response* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
	
	
			property Mogre::WorkQueue::Request^ mRequest
			{
			public:
				Mogre::WorkQueue::Request^ get();
			}
	
			property bool mSuccess
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property String^ mMessages
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property String^ Messages
			{
			public:
				String^ get();
			}
	
			property Mogre::WorkQueue::Request^ Request
			{
			public:
				Mogre::WorkQueue::Request^ get();
			}
	
			bool Succeeded( );
	
			void AbortRequest( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( WorkQueue::Response )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//IResponseHandler
		//################################################################
	
		public: interface class IResponseHandler
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IResponseHandler, Ogre::WorkQueue::ResponseHandler )
	
			virtual Ogre::WorkQueue::ResponseHandler* _GetNativePtr();
	
		public:
	
	
			virtual bool CanHandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ );
	
			virtual void HandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IResponseHandler
		//################################################################
		
		public: ref class ResponseHandler abstract : public Wrapper, public Mogre::WorkQueue::IResponseHandler
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			ResponseHandler( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::WorkQueue::ResponseHandler* _IResponseHandler_GetNativePtr() = IResponseHandler::_GetNativePtr;
		
		
			//Public Declarations
		public:
			ResponseHandler( );
		
		
			[Implementation::MethodIndex( 0 )]
			virtual bool CanHandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ );
		
			virtual void HandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ ) abstract;
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		WorkQueue( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsPaused
		{
		public:
			bool get();
		}
	
		property bool RequestsAccepted
		{
		public:
			bool get();
		public:
			void set(bool accept);
		}
	
		property unsigned long ResponseProcessingTimeLimit
		{
		public:
			unsigned long get();
		public:
			void set(unsigned long ms);
		}
	
		void _Init_CLRObject( );
	
		void Startup( bool forceRestart );
		void Startup( );
	
		void AddRequestHandler( Mogre::uint16 channel, Mogre::WorkQueue::IRequestHandler^ rh );
	
		void RemoveRequestHandler( Mogre::uint16 channel, Mogre::WorkQueue::IRequestHandler^ rh );
	
		void AddResponseHandler( Mogre::uint16 channel, Mogre::WorkQueue::IResponseHandler^ rh );
	
		void RemoveResponseHandler( Mogre::uint16 channel, Mogre::WorkQueue::IResponseHandler^ rh );
	
		void AbortRequestsByChannel( Mogre::uint16 channel );
	
		void AbortAllRequests( );
	
		void SetPaused( bool pause );
	
		void ProcessResponses( );
	
		void Shutdown( );
	
		Mogre::uint16 GetChannel( String^ channelName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( WorkQueue )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//WorkQueue_RequestHandler_Proxy
	//################################################################
	
	class WorkQueue_RequestHandler_Proxy : public Ogre::WorkQueue::RequestHandler, public CLRObject
	{
	public:
		friend ref class Mogre::WorkQueue::RequestHandler;
	
		bool* _overriden;
	
		gcroot<Mogre::WorkQueue::RequestHandler^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		WorkQueue_RequestHandler_Proxy( Mogre::WorkQueue::RequestHandler^ managedObj ) :
			Ogre::WorkQueue::RequestHandler( ),
			_managed(managedObj)
		{
		}
	
		virtual bool canHandleRequest( const Ogre::WorkQueue::Request* req, const Ogre::WorkQueue* srcQ ) override;
	
		virtual Ogre::WorkQueue::Response* handleRequest( const Ogre::WorkQueue::Request* req, const Ogre::WorkQueue* srcQ ) override;
	};
	
	//################################################################
	//WorkQueue_ResponseHandler_Proxy
	//################################################################
	
	class WorkQueue_ResponseHandler_Proxy : public Ogre::WorkQueue::ResponseHandler, public CLRObject
	{
	public:
		friend ref class Mogre::WorkQueue::ResponseHandler;
	
		bool* _overriden;
	
		gcroot<Mogre::WorkQueue::ResponseHandler^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		WorkQueue_ResponseHandler_Proxy( Mogre::WorkQueue::ResponseHandler^ managedObj ) :
			Ogre::WorkQueue::ResponseHandler( ),
			_managed(managedObj)
		{
		}
	
		virtual bool canHandleResponse( const Ogre::WorkQueue::Response* res, const Ogre::WorkQueue* srcQ ) override;
	
		virtual void handleResponse( const Ogre::WorkQueue::Response* res, const Ogre::WorkQueue* srcQ ) override;
	};
	

}

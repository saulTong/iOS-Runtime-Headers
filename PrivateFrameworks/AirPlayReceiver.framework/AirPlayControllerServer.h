/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {
    id _copyPropertyBlock;
    id _performCommandBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    id _setPropertyBlock;
    NSXPCListener *_xpcListener;
}

@property(copy) id copyPropertyBlock;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property NSObject<OS_dispatch_queue> * dispatchQueue;
@property(readonly) unsigned int hash;
@property(copy) id performCommandBlock;
@property(copy) id setPropertyBlock;
@property(readonly) Class superclass;

- (void)_connectionInvalidated:(id)arg1;
- (id)copyPropertyBlock;
- (void)dealloc;
- (id)dispatchQueue;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id)arg3;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (id)performCommandBlock;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (void)setCopyPropertyBlock:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPerformCommandBlock:(id)arg1;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id)arg4;
- (id)setPropertyBlock;
- (void)setSetPropertyBlock:(id)arg1;
- (void)startWithXPCName:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNNotificationRegistrarConnectionListener : NSObject <NSXPCListenerDelegate, UNRemoteNotificationServerDelegate, UNSNotificationRegistrarServerProtocol> {
    NSMapTable *_bundleIdentifiersByConnection;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    UNRemoteNotificationServer *_removeNotificationServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_environment;
- (BOOL)_isAllowedToAdministerRemoteNotificationSettings;
- (BOOL)_isAllowedToRegisterForBundleIdentifier:(id)arg1;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_connectionsForBundleIdentifier:(id)arg1;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)backgroundAppRefreshBundleIdentifierMappingWithResult:(id /* block */)arg1;
- (void)dealloc;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithSystemStateProvider:(id)arg1;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)registerBadgeSettingForBundleIdentifier:(id)arg1;
- (void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(id /* block */)arg3;
- (void)registerRemoteNotificationTypes:(unsigned int)arg1 forBundleIdentifier:(id)arg2 withResult:(id /* block */)arg3;
- (void)remoteNotificationTypesForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)setAllowsBackgroundRefresh:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)setObservingRemoteNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;

@end

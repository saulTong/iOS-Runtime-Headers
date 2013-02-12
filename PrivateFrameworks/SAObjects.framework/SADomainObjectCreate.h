/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SADomainObject;

@interface SADomainObjectCreate : SABaseClientBoundCommand <SADomainObjectCommand> {
}

@property(retain) SADomainObject * object;
@property(copy) NSURL * targetAppId;

+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (BOOL)requiresResponse;
- (void)setObject:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
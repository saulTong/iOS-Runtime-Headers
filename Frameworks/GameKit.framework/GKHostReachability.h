/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSString;



@interface GKHostReachability : GKReachability 
{
    NSString *_hostName;
    NSError *_error;
}

@property(retain) NSError *error;
@property(retain) NSString *hostName;

+ (id)reachabilityWithHostName:(id)arg1;

- (id)error;
- (id)hostName;
- (void)setHostName:(id)arg1;
- (void)dealloc;
- (void)setError:(id)arg1;

@end
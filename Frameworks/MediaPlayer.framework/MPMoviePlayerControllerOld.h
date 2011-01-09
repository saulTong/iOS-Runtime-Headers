/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMoviePlayerController, MPMoviePlayerControllerInternalOld;



@interface MPMoviePlayerControllerOld : NSObject 
{
    MPMoviePlayerController *_moviePlayer;
    MPMoviePlayerControllerInternalOld *_internalOld;
}

+ (Class)windowClass;
+ (void)_setCurrentMoviePlayerController:(id)arg1;
+ (id)_currentMoviePlayerController;
+ (void)_setPlaybackInProgress:(BOOL)arg1;
+ (BOOL)_playbackInProgress;

- (void)_play;
- (void)stop;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)play;
- (id)initWithContentURL:(id)arg1;
- (id)contentURL;
- (void)setScalingMode:(NSInteger)arg1;
- (NSInteger)scalingMode;
- (void)setMovieControlMode:(NSInteger)arg1;
- (NSInteger)movieControlMode;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)_setMoviePlayer:(id)arg1;
- (id)_volumeAudioCategory;
- (void)_checkNetworkMediaType;
- (void)_createPlayer;
- (void)_tearDownPlayer:(BOOL)arg1;
- (void)_playerFinishAndFadeOut;
- (void)_delayedBeginFadeOut;
- (void)_playerFadeInAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_playerFadeOutAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_playbackFailedWithError:(id)arg1;
- (id)_localizedDescriptionForErrorCode:(NSInteger)arg1;
- (NSUInteger)_visiblePartsForMovieControlMode;
- (void)_updateForCurrentMovieControlMode;
- (void)_preloadingComplete;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_movieDidDecode:(id)arg1;
- (void)_itemFailedToPlay:(id)arg1;
- (void)_mediaServerDied:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)_playbackRateChanged:(id)arg1;
- (void)_playbackEnded:(id)arg1;
- (void)_expireImplicitAudioRouteChangePlaybackRestart;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_delayedHideOverlay;
- (void)_bufferingStatusDidChangeNotification:(id)arg1;
- (void)_videoViewScaleModeDidChange:(id)arg1;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)_validationDidFinish:(id)arg1;

@end
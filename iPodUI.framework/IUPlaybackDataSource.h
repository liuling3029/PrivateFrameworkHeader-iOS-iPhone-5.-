/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaybackDataSource : IUMediaDataSource  {
    BOOL _restartPlaybackOnly;
    BOOL _preservePlaybackState;
    unsigned int _shuffleType;
}

@property BOOL restartPlaybackOnly;
@property BOOL preservePlaybackState;
@property unsigned int shuffleType;

+ (Class)queueFeederClass;

- (void)setShuffleType:(unsigned int)arg1;
- (unsigned int)shuffleType;
- (void)setPreservePlaybackState:(BOOL)arg1;
- (BOOL)preservePlaybackState;
- (BOOL)restartPlaybackOnly;
- (void)setRestartPlaybackOnly:(BOOL)arg1;
- (id)init;

@end

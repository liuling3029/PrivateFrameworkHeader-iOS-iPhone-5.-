/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionBeaconState : NSObject  {
    struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    BOOL needsSend;
    unsigned int typeToSend;
}

@property unsigned int typeToSend;
@property BOOL needsSend;
@property unsigned int receivedState;
@property unsigned int sentState;


- (void)setNeedsSend:(BOOL)arg1;
- (void)setTypeToSend:(unsigned int)arg1;
- (void)setSentState:(unsigned int)arg1;
- (BOOL)needsSend;
- (unsigned int)typeToSend;
- (unsigned int)receivedState;
- (struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)lastReceivedBeacon;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setReceivedState:(unsigned int)arg1;
- (unsigned int)sentState;
- (id)init;
- (void)dealloc;

@end

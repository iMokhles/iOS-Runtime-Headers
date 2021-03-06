/* Generated by RuntimeBrowser.
 */

@protocol VideoConferenceDelegate

@required

- (void)videoConference:(VideoConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(NSError *)arg4;

@optional

- (void)videoConference:(VideoConference *)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 closeConnectionForCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg1 didRemoteScreenAttributesChange:(VideoAttributes *)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 didRemoteVideoAttributesChange:(VideoAttributes *)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 withUserInfo:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)videoConference:(VideoConference *)arg1 didStopWithCallID:(unsigned long)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg1 didStopWithCallID:(unsigned long)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)videoConference:(VideoConference *)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned long)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteCallingModeChanged:(unsigned long)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(VideoConference *)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)videoConference:(VideoConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(VideoConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)videoConference:(VideoConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(VideoConference *)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned long)arg2 didPauseAudio:(BOOL)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned long)arg2 networkHint:(BOOL)arg3;

@end

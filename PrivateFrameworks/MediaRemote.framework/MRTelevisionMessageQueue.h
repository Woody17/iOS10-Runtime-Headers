/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionMessageQueue : NSObject {
    MRPendingMessageQueue * _pendingMessageQueue;
    NSMutableDictionary * _pendingReplyQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stopped;
}

- (void)_processNextMessages:(id /* block */)arg1;
- (void)dealloc;
- (void)enqueueMessage:(id)arg1 reply:(id /* block */)arg2 queue:(id)arg3 createDataBlock:(id /* block */)arg4;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (void)processNextMessages:(id /* block */)arg1;
- (bool)reply:(id)arg1;
- (void)stop;

@end

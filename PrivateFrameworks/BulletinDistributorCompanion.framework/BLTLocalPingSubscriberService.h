/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class <BLTPingSubscribing>, BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService> {
    <BLTPingSubscribing> *_delegate;
    BLTBulletinDistributorSubscriber *_subscriber;
}

@property(copy,readonly) NSString * debugDescription;
@property <BLTPingSubscribing> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) BLTBulletinDistributorSubscriber * subscriber;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id)arg3;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)sendBulletinSummary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (void)subscribeToSectionID:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2;
- (void)subscribeWithMachServiceName:(id)arg1;
- (id)subscriber;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
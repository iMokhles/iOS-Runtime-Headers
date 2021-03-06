/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesEditItem : EKEventEditItem {
    NSOperationQueue *_availabilityQueue;
    int _numberOfConflicts;
    NSString *_searchAccountID;
    EKParticipant *_selfOrganizer;
}

- (void).cxx_destruct;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)forceRefreshInviteesItemOnSave;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceTableReloadOnSave;
- (id)init;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)shouldAppearWithVisibility:(int)arg1;

@end

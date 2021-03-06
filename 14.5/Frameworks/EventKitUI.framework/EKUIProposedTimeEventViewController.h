//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKUIInviteesViewMessageSendingManager, EKUIRecurrenceAlertController;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol>
{
    CDUnknownBlockType _completionBlock;
    EKCalendarEventInvitationNotificationAttendee *_proposedTimeAttendee;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIInviteesViewMessageSendingManager *_messageSendingManager;
}

- (void).cxx_destruct;
@property(retain) EKUIInviteesViewMessageSendingManager *messageSendingManager; // @synthesize messageSendingManager=_messageSendingManager;
@property(retain) EKUIRecurrenceAlertController *recurrenceAlertController; // @synthesize recurrenceAlertController=_recurrenceAlertController;
@property(retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee; // @synthesize proposedTimeAttendee=_proposedTimeAttendee;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2;
- (id)_statusButtons;
- (id)items;
- (id)viewTitle;
- (id)proposedTime;
- (id)initWithProposedTimeAttendee:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
@property(nonatomic) _Bool useCustomBackButton;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPostTaskDelegate-Protocol.h>

@class CalDAVCalendarServerInviteNotificationItem, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    _Bool _acceptInvitation;
    NSURL *_sharedAs;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_calendarHomeURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *calendarHomeURL; // @synthesize calendarHomeURL=_calendarHomeURL;
@property(nonatomic) _Bool acceptInvitation; // @synthesize acceptInvitation=_acceptInvitation;
@property(retain, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSURL *sharedAs; // @synthesize sharedAs=_sharedAs;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)generateReply;
- (void)startTaskGroup;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(_Bool)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


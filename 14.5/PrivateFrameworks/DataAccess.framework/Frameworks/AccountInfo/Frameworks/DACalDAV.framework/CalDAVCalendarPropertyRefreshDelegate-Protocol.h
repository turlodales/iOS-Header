//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CalDAVContainer, NSDictionary, NSError, NSSet, NSString, NSURL;
@protocol CalDAVCalendar, CalDAVPrincipal;

@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
- (void)calendarRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithNewCTags:(NSDictionary *)arg2 newSyncTokens:(NSDictionary *)arg3 calendarHomeSyncToken:(NSString *)arg4 updatedCalendars:(NSSet *)arg5 error:(NSError *)arg6;

@optional
- (void)calendarRefreshFoundDeletedContainerURL:(NSURL *)arg1;
- (void)calendarRefreshFoundUpdatedSpecialContainer:(CalDAVContainer *)arg1;
- (void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(CalDAVContainer *)arg1;
- (_Bool)calendarRefreshShouldRetryMkCalendarForPrincipal:(id <CalDAVPrincipal>)arg1 calendar:(id <CalDAVCalendar>)arg2 error:(NSError *)arg3;
@end


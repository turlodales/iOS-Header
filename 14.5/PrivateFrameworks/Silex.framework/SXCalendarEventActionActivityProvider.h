//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXCalendarPresenter, SXHost;

@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXCalendarPresenter> _calendarPresenter;
    id <SXHost> _host;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <SXCalendarPresenter> calendarPresenter; // @synthesize calendarPresenter=_calendarPresenter;
- (void)showInCalendar:(id)arg1;
- (void)createEvent:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithCalendarPresenter:(id)arg1 host:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


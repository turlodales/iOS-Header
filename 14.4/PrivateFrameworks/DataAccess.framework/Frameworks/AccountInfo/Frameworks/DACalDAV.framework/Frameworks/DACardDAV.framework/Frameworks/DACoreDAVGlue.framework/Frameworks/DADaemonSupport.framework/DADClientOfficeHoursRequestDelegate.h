//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DADaemonSupport/DADClientDelegate.h>

#import <DADaemonSupport/DAEventsOfficeHoursRequestResponseConsumer-Protocol.h>

@class NSString;

@interface DADClientOfficeHoursRequestDelegate : DADClientDelegate <DAEventsOfficeHoursRequestResponseConsumer>
{
    NSString *_requestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void)_finishedWithOfficeHours:(id)arg1 error:(id)arg2 canceled:(_Bool)arg3;
- (void)officeHoursRequestWithID:(id)arg1 finishedWithOfficeHours:(id)arg2 error:(id)arg3;
- (void)officeHoursRequestWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)_doRequestWithBlock:(CDUnknownBlockType)arg1;
- (void)setOfficeHours:(id)arg1;
- (void)fetchOfficeHours;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


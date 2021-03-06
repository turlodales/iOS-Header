//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsDaemon/TPSTargetingValidation.h>

#import <TipsDaemon/TPSEventsProviderDelegate-Protocol.h>

@class NSString, TPSContextualDuetEvent;

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate>
{
    TPSContextualDuetEvent *_event;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) TPSContextualDuetEvent *event; // @synthesize event=_event;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;

@interface _CNScheduledObservable : CNObservable
{
    id <CNObservable> _observable;
    id <CNScheduler> _scheduler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;

@interface _EFSamplingObservable : EFObservable
{
    id <EFObservable> _observable;
    id <EFObservable> _sampler;
}

- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;

@end


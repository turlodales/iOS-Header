//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DAESubscribedCalendarDownloadDelegate, OS_dispatch_queue;

@interface DAESubscriptionCalendarDownloadContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <DAESubscribedCalendarDownloadDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <DAESubscribedCalendarDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)asyncCallOutToDelegate:(CDUnknownBlockType)arg1;
- (void)callOutToDelegate:(CDUnknownBlockType)arg1;

@end


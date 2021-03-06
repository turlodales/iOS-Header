//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMBufferObservance.h>

@class NSNotificationCenter, NSObject, NSString;

@interface CAMBufferNotificationObservance : CAMBufferObservance
{
    NSString *_notification;
    NSObject *_object;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(_Bool)arg4;

@end


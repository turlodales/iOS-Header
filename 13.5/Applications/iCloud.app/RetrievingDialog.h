//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RetrievingDialogDelegate;

@interface RetrievingDialog : NSObject
{
    id <RetrievingDialogDelegate> _delegate;
    struct __CFUserNotification *_retrievingNotification;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct __CFUserNotification *retrievingNotification; // @synthesize retrievingNotification=_retrievingNotification;
@property(nonatomic) __weak id <RetrievingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)schedule;
- (void)_schedule;
- (void)_displayIfRequired;
- (void)dismissDialog:(id)arg1;
- (void)_display;
- (void)_timeoutMinPeriod;
- (void)abort;
- (void)_dismiss;
- (const char *)stateName;
- (id)init;

@end


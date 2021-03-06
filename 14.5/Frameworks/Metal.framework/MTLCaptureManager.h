//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCaptureScope;

@interface MTLCaptureManager : NSObject
{
    _Bool _isCapturing;
    id <MTLCaptureScope> _defaultCaptureScope;
}

+ (id)sharedCaptureManager;
@property(retain) id <MTLCaptureScope> defaultCaptureScope; // @synthesize defaultCaptureScope=_defaultCaptureScope;
@property(readonly) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
- (_Bool)supportsDestination:(long long)arg1;
- (void)stopCapture;
- (void)startCaptureWithScope:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (void)startCaptureWithDevice:(id)arg1;
- (_Bool)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (void)dealloc;

@end


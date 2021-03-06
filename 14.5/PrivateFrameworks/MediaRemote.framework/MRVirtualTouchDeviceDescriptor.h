//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>
#import <MediaRemote/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _absolute;
    _Bool _integratedDisplay;
    union _MRHIDSize _screenSize;
}

@property(readonly, nonatomic) union _MRHIDSize screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic, getter=isIntegratedDisplay) _Bool integratedDisplay; // @synthesize integratedDisplay=_integratedDisplay;
@property(readonly, nonatomic, getter=isAbsolute) _Bool absolute; // @synthesize absolute=_absolute;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


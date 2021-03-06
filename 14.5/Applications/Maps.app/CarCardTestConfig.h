//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CarCardTestConfig : NSObject
{
    _Bool _staysOnTop;
    _Bool _grows;
    _Bool _compresses;
    _Bool _stackUseCardLayout;
    unsigned long long _stackCount;
    long long _stackAxis;
    long long _stackAlignment;
    struct CGSize _size;
    CDStruct_de0926f2 _layout;
}

@property(readonly, nonatomic) long long stackAlignment; // @synthesize stackAlignment=_stackAlignment;
@property(readonly, nonatomic) long long stackAxis; // @synthesize stackAxis=_stackAxis;
@property(readonly, nonatomic) _Bool stackUseCardLayout; // @synthesize stackUseCardLayout=_stackUseCardLayout;
@property(readonly, nonatomic) unsigned long long stackCount; // @synthesize stackCount=_stackCount;
@property(readonly, nonatomic) _Bool compresses; // @synthesize compresses=_compresses;
@property(readonly, nonatomic) _Bool grows; // @synthesize grows=_grows;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) _Bool staysOnTop; // @synthesize staysOnTop=_staysOnTop;
@property(readonly, nonatomic) CDStruct_de0926f2 layout; // @synthesize layout=_layout;
- (id)description;
- (id)initWithNotification:(id)arg1;

@end


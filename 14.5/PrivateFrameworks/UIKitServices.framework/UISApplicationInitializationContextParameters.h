//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding>
{
    unsigned long long _supportedInterfaceOrientations;
    NSArray *_deviceFamilies;
    _Bool _requiresFullScreen;
    _Bool _supportsMultiwindow;
    struct CGSize _usableDisplaySizeHint;
    _Bool _preferSmallerDisplaySize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preferSmallerDisplaySize; // @synthesize preferSmallerDisplaySize=_preferSmallerDisplaySize;
@property(nonatomic) struct CGSize usableDisplaySizeHint; // @synthesize usableDisplaySizeHint=_usableDisplaySizeHint;
@property(nonatomic) _Bool supportsMultiwindow; // @synthesize supportsMultiwindow=_supportsMultiwindow;
@property(nonatomic) _Bool requiresFullScreen; // @synthesize requiresFullScreen=_requiresFullScreen;
@property(copy, nonatomic) NSArray *deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GPBFileDescriptor : NSObject
{
    NSString *package_;
    NSString *objcPrefix_;
    unsigned char syntax_;
}

@property(readonly, nonatomic) unsigned char syntax; // @synthesize syntax=syntax_;
@property(readonly, copy, nonatomic) NSString *objcPrefix; // @synthesize objcPrefix=objcPrefix_;
@property(readonly, copy, nonatomic) NSString *package; // @synthesize package=package_;
- (void)dealloc;
- (id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2;
- (id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3;

@end


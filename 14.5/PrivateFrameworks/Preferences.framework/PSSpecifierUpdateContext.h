//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying>
{
    _Bool _animated;
    _Bool _updateModelOnly;
    NSDictionary *_userInfo;
}

+ (id)contextWithUserInfo:(id)arg1;
+ (id)context;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool updateModelOnly; // @synthesize updateModelOnly=_updateModelOnly;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


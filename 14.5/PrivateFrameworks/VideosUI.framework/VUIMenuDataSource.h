//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMenuDataSource : NSObject
{
    NSArray *_mainMenuItems;
    NSArray *_genreMenuItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *genreMenuItems; // @synthesize genreMenuItems=_genreMenuItems;
@property(retain, nonatomic) NSArray *mainMenuItems; // @synthesize mainMenuItems=_mainMenuItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CCUICAPackageDescription : NSObject
{
    _Bool _flipsForRightToLeftLayoutDirection;
    NSURL *_packageURL;
}

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(nonatomic) _Bool flipsForRightToLeftLayoutDirection; // @synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end


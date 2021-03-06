//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKImageKey : NSObject
{
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_basename;
    NSString *_imageID;
    struct CGSize _size;
}

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;
+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSString *filePath;

@end


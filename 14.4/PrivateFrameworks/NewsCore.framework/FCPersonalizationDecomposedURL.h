//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCPersonalizationDecomposedURL : NSObject
{
    NSString *_domain;
    NSArray *_paths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)initWithURLString:(id)arg1;
- (id)initWithURL:(id)arg1;

@end


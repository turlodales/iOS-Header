//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PRSDirectivesManager, SSCoreMLInterface;

@interface PRSModelContext : NSObject
{
    unsigned long long _type;
    SSCoreMLInterface *_model;
    PRSDirectivesManager *_directivesManager;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) PRSDirectivesManager *directivesManager; // @synthesize directivesManager=_directivesManager;
@property(retain, nonatomic) SSCoreMLInterface *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3;

@end


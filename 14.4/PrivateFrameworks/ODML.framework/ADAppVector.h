//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ODML/ADVector.h>

@interface ADAppVector : ADVector
{
    unsigned int _adamID;
}

@property(readonly, nonatomic) unsigned int adamID; // @synthesize adamID=_adamID;
- (id)data;
- (id)initWithString:(id)arg1 version:(id)arg2;
- (id)initWithVersion:(id)arg1 header:(struct ADAppVectorHeader *)arg2 floats:(float *)arg3;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SNDSPGraph : NSObject
{
    shared_ptr_f6ac7592 _graph;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph; // @synthesize graph=_graph;
- (void)writeDotFileToPath:(id)arg1;
@property(readonly, nonatomic) long long numberOfOutputs;
@property(readonly, nonatomic) long long numberOfInputs;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSSet *boxes;
- (id)boxWithName:(id)arg1;
- (_Bool)setProperty:(const void *)arg1 withSize:(unsigned int)arg2 forID:(unsigned int)arg3;
- (_Bool)getProperty:(void *)arg1 withSize:(unsigned int *)arg2 forID:(unsigned int)arg3;
- (_Bool)getPropertySize:(unsigned int *)arg1 isWritable:(_Bool *)arg2 forID:(unsigned int)arg3;
- (_Bool)setParameter:(float)arg1 forID:(unsigned int)arg2;
- (_Bool)hasParameter:(unsigned int)arg1;
- (_Bool)getParameter:(float *)arg1 forID:(unsigned int)arg2;
- (_Bool)setPropertyStrip:(id)arg1 withResourcePath:(id)arg2;
- (_Bool)setAUStrip:(id)arg1;
- (_Bool)reset;
- (_Bool)uninitialize;
- (_Bool)initialize;
- (_Bool)unconfigure;
- (_Bool)configure;
@property(readonly, nonatomic) _Bool initialized;
@property(readonly, nonatomic) _Bool configured;
@property(readonly, nonatomic) long long sliceDurationInSamples;
- (_Bool)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2;
- (id)initWithDSPGraph:(shared_ptr_f6ac7592)arg1;
- (id)init;

@end


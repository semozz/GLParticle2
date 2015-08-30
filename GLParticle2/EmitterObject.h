//
//  EmitterObject.h
//  GLParticle2
//
//  Created by SangWoo on 2015. 8. 30..
//
//

#import <GLKit/GLKit.h>

#import "EmitterShader.h"

#define NUM_PARTICLES 180

typedef struct Particle
{
    float       pID;
    float       pRadiusOffset;
    float       pVelocityOffset;
    float       pDecayOffset;
    float       pSizeOffset;
    GLKVector3  pColorOffset;
}
Particle;

typedef struct Emitter
{
    Particle    eParticles[NUM_PARTICLES];
    float       eRadius;
    float       eVelocity;
    float       eDecay;
    float       eSizeStart;
    float       eSizeEnd;
    GLKVector3  eColorStart;
    GLKVector3  eColorEnd;
    
    GLKVector2  ePosition;
}
Emitter;

@interface EmitterObject : NSObject

@property (assign) Emitter emitter;
@property (strong) EmitterShader* shader;

- (id)initWithTexture:(NSString *)fileName at:(GLKVector2)position;
- (void)renderWithProjection:(GLKMatrix4)projectionMatrix;
- (BOOL)updateLifeCycle:(float)timeElapsed;

@end

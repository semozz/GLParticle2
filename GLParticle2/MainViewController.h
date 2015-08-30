//
//  MainViewController.h
//  GLParticle2
//
//  Created by SangWoo on 2015. 8. 30..
//
//

#import <GLKit/GLKit.h>
#import "EmitterObject.h"

@interface MainViewController : GLKViewController

@property (strong) NSMutableArray* emitters;
@property (strong) EmitterObject* emitter;

@end
